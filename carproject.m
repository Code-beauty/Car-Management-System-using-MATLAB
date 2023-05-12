endfprintf('\nToken 1 for bike')
fprintf('\nToken 2 for Rickshaw')
fprintf('\nToken 3 for car')
fprintf('\nToken 4 for bus')
fprintf('\nToken 5 for truck')
fprintf('\nToken 6 for show record')
fprintf('\nToken 7 for delete record')
amount = 0 ;
		counter= 0 ;
		bike=0;
		cars=0;
		bus=0;
		truck=0;
		rikshaw=0;
        while true 
    fprintf('\nWelcome to Telecom Car Parking System:\n')
    u_input = input('Enter the Token Number:');
    switch u_input
   case 1
        if counter<=50
            amount=amount+50;
             counter = counter+ 1;
		      bike=bike+1;
        
    else 
        fprintf('no more car parking area')
        end
   case 2 
        if counter<=50
            amount=amount+100;
            counter = counter + 1;
		      rikshaw=rikshaw+1;
       
    else 
        fprintf('no more car parking area')
       end
case 3
        if counter<=50
            amount=amount+150;
             counter= counter+ 1;
		      cars=cars+1;
       
    else 
        fprintf('no more car parking area')
        end
case 4
        if counter<=50
            amount=amount+200;
             counter = counter+ 1;
		      bus=bus+1;
        
    else 
        fprintf('no more car parking area')
        end
case 5
        if counter<=50
            amount=amount+250;
             counter = counter+ 1;
		      truck=truck+1;
        
    else 
        fprintf('no more car parking area')
        end
case 6
    fprintf('\n*****')
    fprintf('\nThe total amount = %d ', amount )
     fprintf('\nThe total number of Vehicals Parked = %d ' , counter)
      fprintf('\nThe total number of bikes= %d',bike)
       fprintf('\nThe total number of Cars =%d', cars)
        fprintf('\nThe total number of Buses =%d ',bus)
         fprintf('\nThe total number of Rickshaws = %d', rikshaw)
          fprintf('\nThe total number of trucks=%d',truck)
          fprintf('\n*****')
    case 7
    fprintf('\n###########################')
    amount = 0 ;
		count = 0 ;
		bike=0;
		cars=0;
		bus=0;
		truck=0;
		ricksha=0;
        fprintf('\n#########################')
        fprintf('\nRecord Deleted')
        fprintf('\n##########################')
  otherwise 
  fprintf('Wrong Choice')
   end 
        end