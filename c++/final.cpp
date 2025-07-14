// #include <iostream>
// #include <string>
// using namespace std;

// string replaceAll(string S, string X) {
//     size_t pos = 0;
//     while ((pos = S.find(X, pos)) != string::npos) {
//         S.replace(pos, X.length(), "#");
//         pos += 1;    
//      }
//     return S;
// }
// int main() {
//     int T;
//     cin >> T;
//     cin.ignore(); 
//         while (T--) {
//         string S, X;
//         getline(cin, S, ' ');
//         getline(cin, X);

//         string result = replaceAll(S, X);
//         cout << result << endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string S;
//     getline(cin, S); 

//     istringstream iss(S); 
//     string word;
//     bool found = false;

//     while (iss >> word) {
//         if (word == "Jessica") {
//             found = true;
//             break;
//         }
//     }

//     cout << (found ? "YES" : "NO") << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// struct Student {
//     string name;
//     int cls;
//     char section;
//     int id;
// };

// int main() {
//     int N;
//     cin >> N;
//     vector<Student> students(N);

//     for (int i = 0; i < N; i++) {
//         cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
//     }

//     for (int i = 0, j = N - 1; i < j; i++, j--) {
//         swap(students[i].section, students[j].section);
//     }


//     for (int i = 0; i < N; i++) {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// struct Student {
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math_marks;
//     int eng_marks;

//     int total_marks() const {
//         return math_marks + eng_marks;
//     }
// };

// bool cmp(const Student &a, const Student &b) {
//     if (a.total_marks() != b.total_marks()) {
//         return a.total_marks() > b.total_marks(); // Descending total marks
//     }
//     return a.id < b.id; 
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<Student> students(N);

//     for (int i = 0; i < N; ++i) {
//         cin >> students[i].name >> students[i].cls >> students[i].section
//             >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
//     }


//     sort(students.begin(), students.end(), cmp);

//     for (const auto &s : students) {
//         cout << s.name << " " << s.cls << " " << s.section << " "
//              << s.id << " " << s.math_marks << " " << s.eng_marks << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// struct Student {
//     string name;
//     int cls;
//     char section;
//     long long id;
//     int math_marks;
//     int eng_marks;
// };

// bool cmp(const Student &a, const Student &b) {
//     if (a.eng_marks != b.eng_marks)
//         return a.eng_marks > b.eng_marks;
//     if (a.math_marks != b.math_marks)
//         return a.math_marks > b.math_marks;
//     return a.id < b.id;
// }

// int main() {
//     int N;
//     cin >> N;
//     vector<Student> students(N);

//     for (int i = 0; i < N; i++) {
//         cin >> students[i].name >> students[i].cls >> students[i].section
//             >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
//     }

//     sort(students.begin(), students.end(), cmp);

//     for (auto &s : students) {
//         cout << s.name << " " << s.cls << " " << s.section << " " << s.id << " "
//              << s.math_marks << " " << s.eng_marks << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math_marks;
//     int eng_marks;
    
//     int total_marks() {
//         return math_marks + eng_marks;
//     }
// };

// bool cmp(Student a, Student b) {
//     if (a.total_marks() == b.total_marks()) {
//         return a.id < b.id; // ascending id if total marks equal
//     }
//     return a.total_marks() > b.total_marks(); // descending total marks
// }

// int main() {
//     int n;
//     cin >> n;

//     Student a[n]; 
//     for (int i = 0; i < n; i++) {
//         cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
//     }

 
//     sort(a, a + n, cmp);

  
//     for (int i = 0; i < n; i++) {
//         cout << a[i].name << " " << a[i].cls << " " << a[i].section << " "
//              << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     string name;
//     int cls;
//     char section;
//     int id;
//     int math_marks;
//     int eng_marks;
// };

// bool cmp(Student a, Student b) {
//     if (a.eng_marks != b.eng_marks) {
//         return a.eng_marks > b.eng_marks;
//     }
//     else if (a.math_marks != b.math_marks) {
//         return a.math_marks > b.math_marks;
//     }
//     else {
//         return a.id < b.id;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     Student a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
//     }
//     sort(a, a + n, cmp);
//     for (int i = 0; i < n; i++) {
//         cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }

    for (int i = 0; i < n / 2; i++) {
        swap(a[i].section, a[n - i - 1].section);
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << "\n";
    }

    return 0;
}
