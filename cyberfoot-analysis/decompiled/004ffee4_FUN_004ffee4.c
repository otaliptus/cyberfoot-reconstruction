// Address: 004ffee4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004ffee4(int param_1,int param_2,undefined4 param_3)

{
  undefined3 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = (undefined3)((uint)(param_1 + 0x24) >> 8);
  FUN_004e52e8(PTR_DAT_004e5104,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x30),
               &local_18,CONCAT31(uVar1,*(undefined1 *)(*(int *)(param_1 + 0x34) + 0xa8)),
               CONCAT31(uVar1,*(undefined1 *)(*(int *)(param_1 + 0x34) + 0x30)),param_1 + 0x24,2);
  FUN_00474474(param_2,*(undefined4 *)(param_1 + 0x20),local_18,1,param_3,local_14);
  return;
}

