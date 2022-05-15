/*
    ������������ ��������� �����������. �������� ��������� ������ (��������, �����,
    ������������, ����). �������� ������ �� 10 ����. ���������� ��� ���� ��������� �����������:
    - ������������� �����
    - ������ ���� ����
    - ����� ���� �� ������
    - ����� ����� �� ��������
    - ���������� ������� �� �������� ����
    - ���������� ������� �� ������
    - ���������� ������� �� ������������
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Book
{
private:
    string id;
    string title;
    string autor;
    string publishing;
    string genre;

public:
    static int const SIZE = 10;

    // ���������� ������� ��� ������ ���� �� ������� ������ ���.
    void FillingArray(Book arrBooks[])
    {
        for (int i = 0; i < Book::SIZE; i++)
        {
            arrBooks[i].id = to_string(i + 1);
            arrBooks[i].title = to_string(rand() % 10);
            arrBooks[i].autor = to_string(rand() % 10);
            arrBooks[i].publishing = to_string(rand() % 10);
            arrBooks[i].genre = to_string(rand() % 10);
        }
    }

    // ����� � ������� 
    void Print(Book arrBooks)
    {
        if (arrBooks.id == to_string(1))
        {
            cout.width(7);
            cout << "ID |" << " ��������\t|" << " �����\t\t|" << " ������������\t|" << " ����\t\t|" << endl;
            for (int i = 0; i < 73; i++)
            {
                cout << "-";
            }
            cout << endl;
        }

        cout.width(5);
        cout << arrBooks.id << " | ";
        cout << arrBooks.title << "\t\t| ";
        cout << arrBooks.autor << "\t\t| ";
        cout << arrBooks.publishing << "\t\t| ";
        cout << arrBooks.genre << "\t\t|" << endl;
        cout << endl;
    }

    // ��������� �����
    void EditBook(Book& book)
    {
        cout << "������� �������� �����: "; cin >> title; cout << endl;
        book.title = title;
        cout << "������� ����� �����: "; cin >> autor; cout << endl;
        book.autor = autor;
        cout << "������� ������������ �����: "; cin >> publishing; cout << endl;
        book.publishing = publishing;
        cout << "������� ���� �����: "; cin >> genre; cout << endl;
        book.genre = genre;
    }

    //����� ����� �� ������
    void SearchForABookByAutor(Book books[], string autor)
    {
        bool flag = true;

        cout << "����� � ��������� �������:" << endl << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].autor == autor)
            {
                if (i > 0 && i < 2)
                {
                    cout.width(7);
                    cout << "ID |" << " ��������\t|" << " �����\t\t|" << " ������������\t|" << " ����\t\t|" << endl;
                    for (int i = 0; i < 73; i++)
                    {
                        cout << "-";
                    }
                    cout << endl;
                }

                Print(books[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "����� � ��������� ������� ��� � ����." << endl;
        }

    }    //����� ����� �� ��������

    //����� ����� �� ��������
    void SearchForABookByTitle(Book books[], string title)
    {
        bool flag = true;

        cout << "����� � ��������� ���������:" << endl << endl;

        cout.width(7);
        cout << "ID |" << " ��������\t|" << " �����\t\t|" << " ������������\t|" << " ����\t\t|" << endl;
        for (int i = 0; i < 73; i++)
        {
            cout << "-";
        }
        cout << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (books[i].title == title)
            {
                Print(books[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "����� � ��������� ��������� ��� � ����." << endl;
        }
    }

    // ���������� �� ��������
    void SortingArrayTitle(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].title > books[j + 1].title)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].id = to_string(i + 1);
        }
    }

    // ���������� �� ������
    void SortingArrayAutor(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].autor > books[j + 1].autor)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].id = to_string(i + 1);
        }
    }

    // ���������� �� ������������
    void SortingArrayPublishing(Book books[])
    {
        Book tempBook;

        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (books[j].publishing > books[j + 1].publishing)
                {
                    tempBook = books[j];
                    books[j] = books[j + 1];
                    books[j + 1] = tempBook;
                }
            }
        }

        for (int i = 0; i < SIZE; i++)
        {
            books[i].id = to_string(i + 1);
        }
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Book arrBooks[Book::SIZE];
    Book books;
    srand(time(0));

    bool yesNo = true;
    int numMenu = 0;
    int temp;
    string tempStr;

    // ���������� ������� ��� ������ ���� �� ������� ������ ���.
    books.FillingArray(arrBooks);

    do
    {
        cout << "\t\t����" << endl;
        cout << "\t1. ������ ���� ����; " << endl; // ��� ������������� ����� ������������ ����������� ������ ������.
        cout << "\t2. ������������� �����; " << endl;
        cout << "\t3. ����� ���� �� ������; " << endl;
        cout << "\t4. ����� ����� �� ��������;" << endl;
        cout << "\t5. ���������� ������� �� �������� ����;" << endl;
        cout << "\t6. ���������� ������� �� ������;" << endl;
        cout << "\t7. ���������� ������� �� ������������;" << endl;
        cout << "\t8. �����." << endl; cout << endl;

        cout << "\t������� ����� ����: "; cin >> numMenu; cout << endl;

        if (numMenu == 1)
        {
            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "����� ����� ������ ��� �������� � ����.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 2)
        {
            cout << "����� � ����: " << endl;
            for (Book number : arrBooks)
            {
                books.Print(number);
            }
            cout << endl;

            cout << "������� ����� id ����� ��� ���������: "; cin >> temp;

            if (temp > 0 || temp <= 10)
            {
                books.EditBook(arrBooks[temp - 1]);
            }
            else
            {
                cout << "����� � ����� Id ��� � ����." << endl;
            }

            cout << endl;
            cout << "����� ����� ������ ��� �������� � ����.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 3)
        {
            cout << "������� ������: "; cin >> tempStr;

            books.SearchForABookByAutor(arrBooks, tempStr);

            cout << endl;
            cout << "����� ����� ������ ��� �������� � ����.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 4)
        {
            cout << "������� ��������: "; cin >> tempStr;

            books.SearchForABookByTitle(arrBooks, tempStr);

            cout << endl;
            cout << "����� ����� ������ ��� �������� � ����.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 5)
        {
            books.SortingArrayTitle(arrBooks);

            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "����� ����� ������ ��� �������� � ����.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 6)
        {
            books.SortingArrayAutor(arrBooks);

            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "����� ����� ������ ��� �������� � ����.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 7)
        {
            books.SortingArrayPublishing(arrBooks);

            for (Book number : arrBooks)
            {
                books.Print(number);
            }

            cout << endl;
            cout << "����� ����� ������ ��� �������� � ����.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 8)
        {
            yesNo = false;
        }
    } while (yesNo);

    cout << endl << endl;
    system("pause");
    return 0;
}