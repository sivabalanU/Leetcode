select Customers.name as Customers from Customers
where Customers.id Not in(select Orders.customerId from Orders);