// Defining function calc
function calc() {
    // Retrieve values from the amount and percentage boxes
    var amount = $('#amount').val();
    var percentage = $('#percentage').val();

    // Calculation for the actual tip.
    var tip = amount * (percentage / 100);

    // Also to calculate the total.
    // Amount is actually a string and adding a number to a string just makes a longer string, so we convert it to a number first using the number function
    var total = Number(amount) + tip;

    // Store the values in the result fields

    // I call the toFixed function to make sure there are only two digits after the decimal point.
    $('#tip').val(tip.toFixed(2));
    $('#total').val(total.toFixed(2));

    // Return false
    return false;
}

// Attaching the function to the form's submit event.
$('#calc').submit(calc);