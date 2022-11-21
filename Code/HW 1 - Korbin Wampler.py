#Enter Hours: 50
Hours = float(input ('Enter Hours: '))

#Enter Rate: 10
Rate = float(input ('Enter Rate: '))

#Calculate total pay
if Hours > 40:
    Total = ((40 * Rate) + (Hours - 40) * (1.5 * Rate))
elif Hours <= 40:
    Total = (Hours * Rate)

#Formating to Floats
format_Hours = "{:.2f}".format(Hours) 
format_Rate = "{:.2f}".format(Rate) 
format_Total = "{:.2f}".format(Total) 

#Display results
print(f'hours worked: {format_Hours}, pay rate: {format_Rate} and total pay: {format_Total}')