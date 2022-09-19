// Inserting in mongo db 

use sanayakart
db.items.insertOne({name:"samsung 30s",price:22000, rating: 4.5, qty:233, sold:98})

db.items.insertMany([{name:"samsung 30s",price:22000, rating: 4.5, qty:233, sold:98},
{name:"moto 30s",price:12000, rating: 3.5, qty:133, sold:298},
{name:"Realme 80s",price:12000, rating: 2.5, qty:633, sold:88, "isbig":true}])

db.items.find({rating:3.5})


// Serching for data in mongo db 
use sanayakart

// this query will return the objects with rating equal to 3.5 
db.items.find({rating:3.5})
db.items.find({rating:{$gte:3.5}}) //for greater than or equal to value
db.items.find({rating:{$gt:3.5}}) // for only greater than value
// And operator
db.items.find({rating:{$gt:3.5}, price:{$gt: 4000}})
db.items.find({rating:{$lt:3.5}, price:{$gt: 114000}}) //lt for less than and gt for grater than
// OR oprator 
db.items.find({$or:[{rating: {$lt: 3.5}},{price:{$gt: 11000}}]})

db.items.find({rating: {$gt: 3.5}}, {rating: 1}) // for only rating showing
db.items.find({rating: {$gt: 3.5}}, {rating: 1, qty: 1}) // for only rating and qty showing


// Deleting in mongo db
show dbs 
use sanayakart
show collections

db.items.find({price: 14000})
// Deleting item from the mongo database
db.items.deleteOne({price: 22000})
//deleteOne will delete the matcging document entry and will delete the first  
//entry in case of multi document match
db.items.deleteMany({price: 12000})

// Updating in mongo db
show dbs 
use sanayakart
show collections

db.items.updateOne({name: "moto 30s"}, {$set: {price: 50000}})
db.items.find()
db.items.updateMany({name: "moto 30s"}, {$set: {price: 15000, rating: 4}})


