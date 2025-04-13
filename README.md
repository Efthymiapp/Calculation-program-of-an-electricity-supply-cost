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
## 🧮 Detailed Cost Calculation Guide

The **Final Electricity Billing Cost** is computed using the following components:

- **Total energy consumption in kilowatt-hours (kWh)**
- **Total area of the house in square meters (sqm)**
- **Number of consumption days**, calculated from the **last 3 digits of the student ID**

The user inputs only:
- The number of **kWh consumed**
- The **size of their home (sqm)**

The **number of days** is auto-derived from their academic ID.  
> *For example: ID `E21123` implies 123 days of consumption.*

---

### 🧾 Calculation Formulas

```
Municipality Cost = Square Meters × Municipality Rate × Days / 365

Energy Charges    = kWh Consumed × Energy Rate

Final Billing Cost = Municipality Cost + Energy Charges
```

---

### 📊 Energy Rate Table

| Consumption (kWh) | Tier | Energy Rate (€/kWh) |
|-------------------|------|---------------------|
| 0–1600            | 1    | €0.00542            |
| 1601–2000         | 2    | €0.00682            |
| >2000             | 3    | €0.00822            |

---

### 🏠 Municipality Charges Table

| House Size (sqm) | Rate (€/sqm) |
|------------------|--------------|
| 0–75             | €0.13        |
| 76–115           | €0.26        |
| >115             | €0.42        |

---

## 🧑‍🏫 Example Calculation

Suppose a user wants to calculate the cost for:

- **1800 kWh consumed**
- **Home area: 110 sqm**
- **Student ID: E21090** → implies **90 days**

---

### 🔢 Step-by-step:

**1. Municipality Cost:**

```
= 110 sqm × €0.26 × 90 / 365
≈ €7.05
```

**2. Energy Charges:**

- 1800 kWh falls under **Tier 2** → rate is €0.00682

```
= 1800 × €0.00682
= €12.27
```

**3. Final Billing Cost:**

```
= €7.05 + €12.27
= €19.32
```

---
![image](https://github.com/user-attachments/assets/34ffddd7-5c81-4056-8bc0-d4ddcb6ddd93)


