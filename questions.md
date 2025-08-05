🟢 Beginner-Level OOP Questions
These help you understand basic concepts like classes, objects, constructors, etc.

1. Create a Car class
Properties: brand, model, year

Method: displayInfo() to print car details.

Create 2 car objects and display their info.

2. Bank Account System
Class: BankAccount

Members: accountNumber, accountHolderName, balance

Methods: deposit(), withdraw(), displayBalance()

Create an account and perform operations.

3. Student Result Management
Class: Student

Properties: name, rollNumber, marks in 3 subjects

Method: calculateAverage(), displayResult()

Create and display a student's average and pass/fail (pass if average ≥ 40).

4. Simple Rectangle Class
Properties: length, width

Methods: area(), perimeter(), display()

Use constructor to initialize.

5. Movie Ticket Booking (Basic)
Class: Movie

Properties: name, totalSeats, bookedSeats

Methods: bookTicket(), cancelTicket(), availableSeats()

🟡 Intermediate-Level OOP Questions
Here you'll use constructors, destructors, static members, and encapsulation.

6. Library Book Tracker
Class: Book

Properties: bookID, title, author, isIssued

Methods: issueBook(), returnBook(), displayInfo()

7. Electricity Bill Calculator
Class: ElectricityBill

Properties: consumerName, unitsConsumed

Method: calculateBill() — apply slab rates (e.g., first 100 units: ₹1.5/unit, next 100: ₹2.5/unit, rest: ₹4/unit)

8. Flight Reservation System (Static Count)
Class: FlightTicket

Data members: passengerName, flightNumber

Static member: totalPassengers

Methods: bookTicket (increments totalPassengers), cancelTicket (decrements)

Display total passengers booked.

9. Employee Salary Calculation
Class: Employee

Data: name, empID, basicSalary

Method: calculate netSalary using DA, HRA, deductions

10. Online Shopping Cart (Composition)
Class: Item

name, price, quantity

Class: Cart

vector of Items

Method: addItem(), totalPrice()

🟠 Advanced-Level OOP Concepts
These involve inheritance, polymorphism, abstraction, and file handling.

11. Vehicle Inheritance
Base class: Vehicle → brand, speed

Derived classes: Car, Bike

Each class has displayDetails() (override it)

12. University System
Base class: Person → name, age

Derived classes: Student, Teacher

Student has roll, marks

Teacher has subject, salary

Use virtual functions and polymorphism.

13. Hospital Management System
Class: Patient (name, age, disease)

Class: Doctor (name, specialization)

Class: Appointment (Patient, Doctor, dateTime) — Use composition

14. File-Based Contact Book
Class: Contact → name, phone, email

Methods: add, search, delete contact

Store and retrieve using file handling.

15. Ride-Sharing App (Uber-like)
Classes: User, Driver, Ride

Use inheritance (Person → User, Driver)

Ride includes start, end location, fare calculator

Use polymorphism for calculating fare (e.g., Bike, Car have different rates)