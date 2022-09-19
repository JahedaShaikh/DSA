alert("This is a message");

// promp in Javascript
let name0 = prompt("What is your name?", "Guest")
console.log(name0)

// confirm in Javascript
let deletePost = confirm("Do you really want to delete this post ?");
// console.log(deletePost)

if(deletePost){
    // code to delete the post
    console.log("Your post has been deleted successfully");

}
else{
    // code to cancel deletion of the post
    console.log("You post has not been deleted");
}