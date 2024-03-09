function convertToNumber(value){
    return parseInt(value)
}

function handleDeposit(){
    var inputValue = document.getElementById("deposit-input").value;
    var convertedInputValue = convertToNumber(inputValue);
    // console.log(inputValue);

    var depositAmount = document.getElementById("deposit-amount").innerText;
    var convertedDepositAmount = convertToNumber(depositAmount);

    var sum = convertedInputValue + convertedDepositAmount;
    // console.log(sum);

    document.getElementById("deposit-amount").innerText = sum;

    var totalAmount = document.getElementById("total-amount").innerText;

    var convertedTotalAmount = convertToNumber(totalAmount);

    var totalSum = convertedTotalAmount + convertedInputValue;

    document.getElementById("total-amount").innerText = totalSum;

    console.log(totalSum);

    document.getElementById("deposit-input").value = "";      // Input diye deposit e click korle jeno sheta vanish hoye jay she jonno eta deya hoise //
}


function handleWithdraw(){
    var inputWithdraw = document.getElementById("withdraw-input").value;
    var convertedInputWithdraw = convertToNumber(inputWithdraw);

    var withdrawAmount = document.getElementById("withdraw-amount").innerText;
    var convertedWithdrawAmount = convertToNumber(withdrawAmount);

    var sum = convertedWithdrawAmount + convertedInputWithdraw;
    // console.log(sum);

    document.getElementById("withdraw-amount").innerText = sum;

    var totalAmount = document.getElementById("total-amount").innerText;
    var convertedTotalAmount = convertToNumber(totalAmount);

    var totalSum = convertedTotalAmount - convertedInputWithdraw;

    document.getElementById("total-amount").innerText = totalSum;

    console.log(totalSum);

    document.getElementById("withdraw-input").value = "";
}


// --------------------------------------------------------------------------------------------- //

/*
function setInnerText(id, value) {
  document.getElementById(id).innerText = value;
}

function getConvertedValue(id, element) {
    if (element == "innerText") {
      var value = document.getElementById(id).innerText;
      return parseFloat(value);
    } else {
      var value = document.getElementById(id).value;
      return parseFloat(value);
    }
  }

function handleDeposit() {
    var convertedInputValue = getConvertedValue("deposit-input", "value");
  
    var converteddepostiteAmount = getConvertedValue(
      "deposit-amount",
      "innerText"
    );
    var sum = convertedInputValue + converteddepostiteAmount;
    setInnerText("deposit-amount", sum);
  
    var convertedTotalAmount = getConvertedValue("total-amount", "innerText");
    var totalSum = convertedInputValue + convertedTotalAmount;
    setInnerText("total-amount", totalSum);
    document.getElementById("deposit-input").value = "";
  }
  
  function handleWithdraw() {
    var convertedInputWithdraw = getConvertedValue("withdraw-input", "value");
    var convertedWithdrawAmount = getConvertedValue(
      "withdraw-amount",
      "innerText"
    );
    var sum = convertedInputWithdraw + convertedWithdrawAmount;
    setInnerText("withdraw-amount", sum);
    var convertedTotalAmount = getConvertedValue("total-amount", "innerText");
    var totalSum = convertedTotalAmount - convertedInputWithdraw;
    setInnerText("total-amount", totalSum);
    document.getElementById("withdraw-input").value = "";
  }
  */