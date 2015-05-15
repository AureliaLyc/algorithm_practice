sort(A)
   buildHeap(A)
   for i = n-1 downto 1 do
      swap A[0] with A[i]
      heapify(A, 0, i)
end

buildHeap(A)
  for i = n/2 -1 downto 0 do
     heapify( A, i, n )
end

heapify(A, idx, max )
   left = 2*idx+1
   right = 2*idx+2
   if(left < max ) and A[left] > A[idx] then
      largest = left
   else largest = idx
   if(right < max and A[right] > A[largest] ) then
      largest = right
   if(largest != idx) then
      swap A[i] and A[largest]
      heapify(A, largest, max)
end
