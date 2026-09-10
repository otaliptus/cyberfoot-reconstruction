// Address: 0046b420
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0046b420(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char local_10;
  undefined3 uStack_f;
  
  _local_10 = CONCAT31((int3)((uint)param_3 >> 8),1);
  if (*(short *)(param_1 + 0x1f2) != 0) {
    (**(code **)(param_1 + 0x1f0))(*(undefined4 *)(param_1 + 500),param_1,param_3,&local_10,param_2)
    ;
  }
  if ((local_10 != '\0') && (iVar1 = FUN_004673cc(param_1,0xb039,param_2,param_3), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

