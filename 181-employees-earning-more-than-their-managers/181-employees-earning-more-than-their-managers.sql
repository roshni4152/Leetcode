# Write your MySQL query statement below
select Employee.name as Employee 
from Employee join Employee as Manager
on Employee.ManagerId=manager.id and Employee.salary>manager.salary;




