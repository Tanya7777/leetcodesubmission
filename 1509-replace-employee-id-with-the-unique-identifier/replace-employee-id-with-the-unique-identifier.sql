# Write your MySQL query statement below
select e.name, eid.unique_id from Employees e left join employeeUNI eid on e.id=eid.id;