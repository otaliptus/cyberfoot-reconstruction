// Address: 004020d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004020d4(undefined4 param_1,int param_2)

{
  char cVar1;
  int local_10 [2];
  
  FUN_0040198c(param_1,param_2 + 4,local_10);
  if ((local_10[0] != 0) && (cVar1 = FUN_0040201c(local_10), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

