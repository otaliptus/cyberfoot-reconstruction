// Address: 0042b628
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b628(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_0042b5c8(param_1);
      FUN_0042b4cc(param_1,&local_10);
      *(undefined4 *)(param_1 + 0x18) = local_10;
      *(undefined4 *)(param_1 + 0x1c) = local_c;
      *(undefined4 *)(param_1 + 4) = 0;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
      *(int *)(param_1 + 4) = param_2;
      FUN_0042b4f0(param_1,param_1 + 0x18);
    }
  }
  return;
}

