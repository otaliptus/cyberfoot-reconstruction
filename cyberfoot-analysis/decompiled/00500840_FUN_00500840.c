// Address: 00500840
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00500840(int param_1,LONG *param_2)

{
  int iVar1;
  LONG local_2c;
  LONG LStack_28;
  LONG LStack_24;
  LONG LStack_20;
  tagRECT local_1c;
  
  local_2c = *param_2;
  LStack_28 = param_2[1];
  LStack_24 = param_2[2];
  LStack_20 = param_2[3];
  local_1c.left = local_2c;
  local_1c.top = LStack_28;
  local_1c.right = LStack_24;
  local_1c.bottom = LStack_20;
  InflateRect(&local_1c,-1,-1);
  iVar1 = *(int *)(param_1 + 8);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),0xff00000f);
  FUN_0042af8c(iVar1,&local_1c);
  FUN_0043a3e0(*(undefined4 *)(param_1 + 8),&local_2c,0xff000014,1,0xff000006);
  return;
}

