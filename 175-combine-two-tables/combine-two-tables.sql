select Person.firstName,Person.lastName,Address.city,Address.state
from Person LEft JOIN Address
on Person.personId = Address.PersonId;