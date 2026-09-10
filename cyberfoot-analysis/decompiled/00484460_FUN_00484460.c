// Address: 00484460
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00484460(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  char local_d;
  undefined4 local_c;
  int local_8;
  
  local_d = '\0';
  local_c = param_2;
  local_8 = param_1;
  if (*(short *)(param_1 + 0x2c2) != 0) {
    param_1 = (**(code **)(param_1 + 0x2c0))(*(undefined4 *)(param_1 + 0x2c4),param_2,&local_d);
  }
  if (local_d == '\0') {
    iVar1 = *(int *)(local_8 + 0x248);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x38) != 0)) {
      param_1 = FUN_00403c80(iVar1,local_c);
      if ((char)param_1 != '\0') goto LAB_004844ce;
    }
    param_1 = FUN_0048440c();
    if ((char)param_1 == '\0') {
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_004844d0;
    }
  }
LAB_004844ce:
  uVar3 = (undefined3)((uint)param_1 >> 8);
  uVar2 = 1;
LAB_004844d0:
  return CONCAT31(uVar3,uVar2);
}

