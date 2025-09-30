# Bank-System-pro219
A C++ Bank Management System built with OOP and Clean Architecture, simulating real-world banking operations with manager approval and role-based access.
 

# ?? Bank Management System

 

The project simulates a real banking environment with different roles (Manager, Employees, Customers) and features multiple development stages, starting as a **Monolithic Console Application** and later evolving towards a more scalable architecture.

---

## ?? Project Goals

* Practice **OOP design**, **Clean Architecture** concepts and **Design Patterns "GoF"**.
* Simulate **real-world banking operations**.
* Build the project iteratively (**versions/releases**) instead of one big implementation.
* Prepare the codebase for future extension (GUI, Web API, Microservices).

---

## ??? System Overview

### Roles
* **Account** ? supports multiple transaction types.
* **Transaction** ? deposit, withdraw, transfer (requires manager approval).
### future roles
* **Bank Manager** ? manages employees, assigns permissions, approves sensitive transactions.
* **User (Employee)** ? interacts with customers depending on assigned permissions.
* **Customer** ? owns one or more accounts.

### Core Features (MVP - First Release)
* Login the system by card id and password.
* Perform Transactions (deposit / withdraw / transfer).

---

## ?? Development Stages
1. **Version 1 (MVP)** ? Console application with Transaction Operations + Loginning.
---
### future versions: 
1. **Version 2** ?  CRUD operations on client.
2. **Version 3** ? Add roles/permissions, approval workflow.



## ??? Tech Stack

* **Language**: C++ (OOP)
* **Architecture**: Clean Architecture (Entities, Use Cases, Interface, Infrastructure)
* **Database**: file (first) ? SQLite (in a future version)

---

## ?? Future Enhancements

* Manage employees (add / edit / delete / assign roles).
* Manage Customers (add / edit / deactivate).
* Manage Accounts (open / suspend).
* Authentication & Authorization system.
* Microservices migration.
* API integration.
* More advanced financial features.
