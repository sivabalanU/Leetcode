-- select  distinct P1.email as Email from Person P1
-- inner join Person P2
-- on P1.email = P2.email and P1.id <> P2.id
-- ;

select email as Email from Person
group by Email
having(count(*) >1)