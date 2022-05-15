/*
���� ������� ������� MxN (M �����, N ��������).
���������� ��������� �� ���������� � �������� �������,
�������������� ����������� ����� ����� �/��� ��������
������� ��������� ���������� ��� � � ��������� �������.
*/

#include <iostream>
#include <iomanip>
using namespace std;


enum UserChoice
{
    Exit = 0,
    MoveRowsDown = 1,
    MoveRowsUp = 2,
    MoveColumnsLeft = 3,
    MoveColumnsRight = 4,
};

//������������� �������
void inicMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " ������!" << endl;
        return;
    }

    int value = 1;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            pMas[i][j] = value;
            value++;
        }
    }
}

//����� ������� �� �����
void ShowMas(int** pMas, int rowCount, int columnCount)
{
    if (pMas == nullptr)
    {
        cout << " ������!" << endl;
        return;
    }

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << setw(3) << pMas[i][j] << " ";
        }
        cout << endl;
    }
}

//����� �������
void moveMas(int** pMas, int rowCount, int columnCount)
{
    int intUserChoice;
    enum UserChoice userChoice;
    int originalMovesCount = 0;
    int changedMovesCount = 0;
    int temp;

    cout << " �������� ��� �����! " << endl <<
        " 0 -> �����." << endl <<
        " 1 -> ����������� ������ ����" << endl <<
        " 2 -> ����������� ������ �����" << endl <<
        " 3 -> ����������� ������� �����" << endl <<
        " 4 -> ����������� ������� ������" << endl;
    cin >> intUserChoice;
    userChoice = (enum UserChoice)intUserChoice;

    switch (userChoice)
    {
    case Exit:
        cout << " �� �����!" << endl;
        break;
    case MoveRowsDown:
    case MoveRowsUp:
    case MoveColumnsLeft:
    case MoveColumnsRight:
        cout << " �� ������� ���������� ?" << endl;
        cin >> originalMovesCount;
        if (originalMovesCount <= 0)
        {
            cout << " �������� ������ ����� > 0" << endl;
            return;
        }

        changedMovesCount = originalMovesCount;
        //��� ��������� ������
        if ((changedMovesCount >= rowCount && userChoice == MoveRowsDown) ||
            (changedMovesCount >= rowCount && userChoice == MoveRowsUp))
        {
            changedMovesCount = changedMovesCount % rowCount;
        }
        else if ((changedMovesCount >= columnCount && userChoice == MoveColumnsLeft) ||
            (changedMovesCount >= columnCount && userChoice == MoveColumnsRight))
        {
            changedMovesCount = changedMovesCount % columnCount;
        }
        //��� �����
        while (changedMovesCount != 0)
        {
            switch (userChoice)
            {
            case MoveRowsDown:
                for (int column = 0; column < columnCount; column++)
                {
                    temp = pMas[rowCount - 1][column];
                    for (int row = rowCount - 1; row > 0; row--)
                    {
                        pMas[row][column] = pMas[row - 1][column];
                    }
                    pMas[0][column] = temp;
                }
                break;
            case MoveRowsUp:
                for (int column = 0; column < columnCount; column++)
                {
                    temp = pMas[0][column];
                    for (int row = 0; row < rowCount - 1; row++)
                    {
                        pMas[row][column] = pMas[row + 1][column];
                    }
                    pMas[rowCount - 1][column] = temp;
                }
                break;
            case MoveColumnsLeft:
                for (int row = 0; row < rowCount; row++)
                {
                    temp = pMas[row][0];
                    for (int column = 0; column < columnCount - 1; column++)
                    {
                        pMas[row][column] = pMas[row][column + 1];
                    }
                    pMas[row][columnCount - 1] = temp;
                }
                break;
            case MoveColumnsRight:
                for (int row = 0; row < rowCount; row++)
                {
                    temp = pMas[row][columnCount - 1];
                    for (int column = columnCount - 1; column > 0; column--)
                    {
                        pMas[row][column] = pMas[row][column - 1];
                    }
                    pMas[row][0] = temp;
                }
                break;
            default:
                cout << " ������!" << endl;
                break;
            }
            changedMovesCount--;
        }
        //����� ������
        ShowMas(pMas, rowCount, columnCount);
        break;
    default:
        cout << " �������� ��������" << endl;
        break;
    }
}

int main()
{

    setlocale(LC_ALL, "rus");

    int rowCount;
    int columnCount;

        cout << "\n\n ������� ���������� ����� (1...10):";
        cin >> rowCount;

        if (rowCount <= 0 || rowCount > 10)
        {
            cout << " �������� �������� ���������� �����" << endl;
            return 1;
        }


        cout << " ������� ���������� �������� (1...10):";
        cin >> columnCount;

        if (columnCount <= 0 || columnCount > 10)
        {
            cout << " �������� �������� ���������� ��������" << endl;
            return 1;
        }

        int** simpleMas = new int* [rowCount];
        for (int i = 0; i < rowCount; i++)
        {
            simpleMas[i] = new int[columnCount];
        }
        //���������� � ����� �� �����
        inicMas(simpleMas, rowCount, columnCount);
        cout << " ����� �������: " << endl;
        ShowMas(simpleMas, rowCount, columnCount);
        //������ � ��������
        moveMas(simpleMas, rowCount, columnCount);

        //�������� �������
        for (int i = 0; i < rowCount; i++)
        {
            delete[] simpleMas[i];
        }
        delete[] simpleMas;
    
    
    system("pause");
    return 0;
}
