function validate(){
   let fname = document.getElementById('firstName').value;
   let lname = document.getElementById('lastName').value;
   let pass = document.getElementById('password').value;
   let mail = document.getElementById('email').value;
   let mob = document.getElementById('mobileno').value;
   let add = document.getElementById('address').value;

   // to validate first name
   if(fname.length < 6){
    alert("First name should have more than 6 characters");
    return false;
   }
   if(fname.length>=6){
    let regx = /^[a-zA-Z]+$/;
    if(!regx.test(fname)){
        alert('Name should contain only alphabets');
        return false;
    }
   }

   // to validate last name
   if(lname.length == 0){
        alert("Last name can not be empty");
        return false;
   }

   // to validate password
   if(pass.length < 6){
        alert('password must be greater than 6 characters');
        return false;
   }

   // to validate email
   if(mail.length == 0){
          alert("Please enter email");
   }
   if(mail.length > 1){
     let atpos = mail.indexOf("@");
     let dotpos = mail.indexOf(".");
     if(atpos == -1 || dotpos == -1){
          alert("Email is not in correct format");
          return false;
     }else if(atpos > dotpos){
          alert("Email is not in correct format");
          return false;
     }
   }

   //to validate mobile number
   if(mob.length != 10){
        alert('Mobile number should be 10 digits');
        return false;
   }


   // sucess validation returning true
   alert("Validation Sucess");
   return true;

    
}