# Write your MySQL query statement below
select MAX(salary) As SecondHighestSalary
from Employee
WHERE salary < (select max(salary) from Employee);