// Knihovny
#include <iostream> // Pro C++
#include <stdlib.h>
#include <ctime>

using std::string;


class Admin{
private:
    int id_admin;
    string name;
    string email;
    string password;

public:
    Admin(int id, string n, string e ,string p);
    ~Admin();

    void accessUser();
    void decideOnDevelopment();
    void accesssCourses();
    void arrangePromotion();
};


class Teacher{
private:
    int id_teacher;
    string name;
    string email;
    string bio;
    string password;
    Course* access;

public:
    Teacher(int id, string n, string e, string p, string b);
    ~Teacher();

    void createCourse();
    void manageCourse();
    void comunicateWithStudent();
    void reportUser();
};


class UserStatus{
private:
    int status;

public:
    UserStatus(string s);
    ~UserStatus();
    string getStatus();
    void setStatus();
};


class User{
private:
    int id_user;
    string name;
    string email;
    string password;
    UserStatus userStatus;

public:
    User(int id, string n, string e, string p);
    ~User();

    void changeStatus(UserStatus newStatus);
    void restoreAccount();
};


class Course{
private:
    int id_course;
    string name;
    string description;
    bool isPublic;
    float price;

public:
    Course(int id, string n, string des, bool stat, float pr);
    ~Course();

    void edit(string newName, string newDescription, float newPrice);
    void deleteSelf();
    void removeFromPublicList();
    void publish(bool stat);
};


class Backup{
private:
    time_t timestamp;
    string backupContent;

public:
    Backup(time_t t, string bc);
    ~Backup();
    
    void createNewBackup();
    void restFromBackup();
};


class SystemLog{
private:
    int id_log;
    time_t timestamp;
    string message;

public:
    SystemLog(int id, time_t t, string ms);
    ~SystemLog();

    void writeToLog(string m);
    string getLog();
};


class Lesson{
private:
    int id_lesson;
    time_t scheduledTime;
    static int durationMin;
    bool isActive;

public:
    Lesson(int id, time_t sT, int dur);
    ~Lesson();

    void startLeson();
    void endLeson();
    void muteUser(int userId);
    void shareScreen();
    void sendNotification();
};














// Hlavní funkce
/*
int main(){

  return 0;
}*/