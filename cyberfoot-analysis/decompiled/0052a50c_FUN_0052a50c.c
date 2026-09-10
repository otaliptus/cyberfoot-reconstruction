// Address: 0052a50c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0052a50c(int *param_1,int param_2,undefined1 param_3,int param_4)

{
  tagRECT local_24;
  int local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;
  
  local_24.left = *param_1;
  local_24.top = param_1[1];
  local_24.right = param_1[2];
  local_24.bottom = param_1[3];
  local_9 = param_3;
  local_8 = param_2;
  local_10 = FUN_004b14a0(PTR_DAT_004ae104,1,0);
  local_14 = local_8 * 2;
  FUN_00526104(local_9,&local_10,local_14,(double)local_8,(double)local_14,
               (double)(local_24.bottom - local_24.top),(double)(local_24.right - local_24.left),
               (double)local_24.top,(double)local_24.left);
  InflateRect(&local_24,-param_4,-param_4);
  FUN_00526104(local_9,&local_10,local_24.top,(double)local_8,(double)local_14,
               (double)(local_24.bottom - local_24.top),(double)(local_24.right - local_24.left),
               (double)local_24.top,(double)local_24.left);
  return local_10;
}

