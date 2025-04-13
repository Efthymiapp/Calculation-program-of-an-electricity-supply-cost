## 🔌 Electricity Cost Calculator in C
It simulates a billing system for an electric power supply company, providing distinct interfaces and functionalities for both regular users and system administrators.
---
In this system, only two types of users are allowed to log in: the program administrator (admin) and a regular user. Each user type has access to specific functionalities as outlined below.

Upon launching the program, the Main Screen is displayed, prompting the user to log in by entering either the word "admin" (for administrator access) or "user" (for regular user access). Alternatively, pressing 0 will terminate the program completely.

Depending on the input (admin or user), the system will present the corresponding menu (admin screen or user screen). Menu selections are made by entering specific numbers or characters as instructed (e.g., a user who wants to log in selects option 2, and if they then want to proceed to payment, they would choose option b).
## 📌 Features

### 👤 User Interface

- **Sign Up**: Register with full name, address, username & 4-character password.
- **Login**: Access personal account using username and password.
- **User Menu (after login)**:
  - 🔢 `Calculate Cost`: Based on kilowatt-hour (kWh) consumption, home size (sqm), and derived number of days from the student's ID.
  - 💳 `Payment`: Pay the final amount using **cash** or **card** (10% discount if paid by card). At this point it should be checked that the user has entered 16 digit number for the card. Otherwise it will display a corresponding message and re -ask the insertion of the card number. In order for the payment to be successful, the user must then enter the correct final amount, Otherwise, an appropriate error message is displayed and the program re -introduces the importation of the amount. If he selects cash as a payment method, then it is sufficient to enter the final payment amount that had appeared to him earlier.
  - 🧾 `Receipt`: Print a receipt (available only after successful payment).
  - 🚪 `Exit`: Return to user screen.
- **Logout**: Return to main screen.

---

### 🔐 Admin Interface

- **Login**: Use credentials `username: root` & `password: admin123`.
- **Admin Menu**:
  - ⚙️ `Change Cost`: Modify cost per kWh. The administrator is required to select the grade (1-3) for which he wishes to change the price of a kilowatt hour, as shown in the tables below. The difference between the new price from the old should not exceed an increase or decrease greater than 20% of the old price.
Otherwise, a corresponding error message is displayed and a new price is requested.
  - 🚪 `Exit`: Return to admin screen.
- **Logout**: Return to main screen.

---
## 🧮 Cost Calculation Logic

The **total energy bill** is computed as:
Final Cost = (kWh × Energy Charge) + (sqm × Municipality Charge × Days / 365)

### 💡 Energy Charge per kWh

| Consumption (kWh) | Cost (€ / kWh) |
|-------------------|----------------|
| 0–1600            | 0.00542        |
| 1601–2000         | 0.00682        |
| >2000             | 0.00822        |

### 🏠 Municipality Charge per sqm

| Area (sqm)        | Cost (€ / sqm) |
|-------------------|----------------|
| 0–75              | 0.13           |
| 76–115            | 0.26           |
| >115              | 0.42           |

🗓 **Days** are automatically calculated from the last 3 digits of the user's student ID (e.g., ID `E21123` → `123` days).

---

