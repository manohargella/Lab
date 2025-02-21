function convert(){
    let x = parseInt(document.getElementById('value').value);
    if(x < 0 || x>999){
        alert('Number should be in the range of 0 - 999');
        return false;
    }
    let regex = /[^0-9]/g; // ^ symbol refers to not
    if(regex.test(x)){
        alert('Only enter digit, alphabets are not allowed');
        return false;
    }

    const nums = ["Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"];
    let i = 0;
    let word = "";
    while(x>0){
        i = x%10;
        x = Math.floor(x/10);
        word = nums[i] + " " + word;
    }
    alert(word); 
    return true;
}


function clearInput(){
    let x = document.getElementById('value');
    x.value = "";
}