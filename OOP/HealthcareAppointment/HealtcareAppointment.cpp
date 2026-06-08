#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;

public:
    Patient(string n, int a) {
        name = n;
        age = a;
    }

    string getName() {
        return name;
    }

    void display() {
        cout << "\nPatient Details" << endl;
        cout << "Patient Name : " << name << endl;
        cout << "Patient Age : " << age << endl;
    }
};

class Doctor {
private:
    string name;
    string department;
    int fee;

public:
    Doctor(string n, string d, int f) {
        name = n;
        department = d;
        fee = f;
    }

    string getName() {
        return name;
    }

    int getFee() {
        return fee;
    }

    void display() {
        cout << "\nDoctor Details" << endl;
        cout << "Doctor Name : " << name << endl;
        cout << "Department : " << department << endl;
        cout << "Fee : " << fee << endl;
    }
};

class Appointment {
public:
    void bookAppointment(Patient &p, Doctor &d) {
        cout << "\nAppointment Confirmed" << endl;
        cout << p.getName() << " will meet "
             << d.getName() << endl;
    }

    int generateBill(Doctor &d) {
        return d.getFee();
    }
};

class HospitalWorkflow {
public:
    void processVisit() {
        string patientName;
        int age;

        string doctorName;
        string department;
        int fee;

        cout << "Enter Patient Name: ";
        getline(cin, patientName);

        cout << "Enter Patient Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Doctor Name: ";
        getline(cin, doctorName);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Consultation Fee: ";
        cin >> fee;

        Patient patient(patientName, age);
        Doctor doctor(doctorName, department, fee);
        Appointment appointment;

        cout << "\nHOSPITAL VISIT" << endl;

        patient.display();
        doctor.display();

        appointment.bookAppointment(patient, doctor);

        int bill = appointment.generateBill(doctor);

        cout << "\nFinal Bill : " << bill << endl;
    }
};

int main() {
    HospitalWorkflow workflow;
    workflow.processVisit();

    return 0;
}