/* Write your MySQL query statement below*/
select P.firstName, P.lastName, A.city, A.state from Person P left join Address A USING (personId)