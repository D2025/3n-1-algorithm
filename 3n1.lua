num = 3
nums = num

while(true) do
	while(num ~= 1) do
		if num%2==0 then num = num/2
		else num = num*3+1 end

                if num==nums then print(string.format("number %s looped", nums)) end
		
		if num<nums then num = 1 end
	
	if nums%100000000==1 then print(string.format("%i reached 1", nums)) end
	num = nums + 2
	nums = num
	end
end

