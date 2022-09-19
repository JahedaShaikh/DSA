// getting-started.js
const mongoose = require('mongoose');
mongoose.connect('mongodb://localhost/sanayakart', {useNewUrlParser: true, useUnifiedTopology: true});

const db = mongoose.connection;
db.on('error', console.error.bind(console, 'connection error:'));
// db.once('open', function() {
//   // we're connected!
//   console.log("we are connected")
// });

const kittySchema = new mongoose.Schema({
  name: String
});

// NOTE: methods must be added to the schema before compiling it with mongoose.model()
kittySchema.methods.speak = function () {
   const greeting =  "My name is " + this.name;
  //  console.log(greeting);
}

const Kitten = mongoose.model('sanayakitty', kittySchema);

const sanayakitty = new Kitten({ name: 'sanayakitty Name' });
const sanayakitty2 = new Kitten({ name: 'sanayakitty Name' });
// console.log(sanayakitty.name); // 'Silence'
// sanayakitty.speak();

sanayakitty.save(function (err, sanayakitty) {
  if (err) return console.error(err);
  // sanayakitty.speak();
});
sanayakitty2.save(function (err, k) {
  if (err) return console.error(err);
  // k.speak();
});

Kitten.find( {name: "sanayakitty2"}, function (err, kittens) {
  if (err) return console.error(err);
  console.log(kittens);
});