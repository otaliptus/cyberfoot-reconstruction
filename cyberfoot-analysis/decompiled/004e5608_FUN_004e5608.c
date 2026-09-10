// Address: 004e5608
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004e5608(undefined4 param_1,int param_2,LONG *param_3,char param_4)

{
  tagRECT local_24;
  LONG local_14;
  LONG LStack_10;
  LONG LStack_c;
  LONG LStack_8;
  
  local_24.left = *param_3;
  local_24.top = param_3[1];
  local_24.right = param_3[2];
  local_24.bottom = param_3[3];
  local_14 = local_24.left;
  LStack_10 = local_24.top;
  LStack_c = local_24.right;
  LStack_8 = local_24.bottom;
  InflateRect(&local_24,-1,-1);
  FUN_0042ab6c(*(undefined4 *)(param_2 + 0x14),0xff00000f);
  FUN_0042af8c(param_2,&local_24);
  if (param_4 == '\0') {
    FUN_0043a3e0(param_2,&local_14,0xff000014,1,0xff000010);
  }
  else {
    FUN_0043a3e0(param_2,&local_14,0xff000014,1,0xff000006);
  }
  return;
}

