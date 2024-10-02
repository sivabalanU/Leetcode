select u.unique_id , e.name from Employees e left Join EmployeeUNI u
on u.id = e.id;