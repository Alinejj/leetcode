class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        //will hold how many employees worked >= then the target hour
       int count = 0;

       //for (auto h : hours): This syntax iterates over each element in the container hours. 
       //The variable h represents each element of hours during each loop iteration.
       //The auto keyword automatically deduces the type of h based on the type of elements in hours.
        //auto: The auto keyword automatically deduces the type of h based on the type of elements in hours. 
        //For example, if hours is a std::vector<int>, auto will make h an int for each loop iteration.
        //hours: This is the container (e.g., a vector, array, or set) that you want to loop through.
        for(auto h : hours){
            //if my hour h is greater than or equal to my target
            if(h >= target){
                //increment count
                count++;
            }
           
        }
        return count;
    }
};

//[0,1,2,3,4]
//assign h to loop inside the vector h
//if h is 0 and my target is 2 then it didnt meet my requiremnt
//same for 1
//when my h reaches 2, 3, 4 those 3 reaches the target of 2 or beyond
//so i store the sum of that in count
//for(auto h : hours) is also for(int i =0; i<hours.size(); i++)