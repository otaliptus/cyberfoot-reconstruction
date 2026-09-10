// Address: 0047b530
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047b530(int *param_1,int param_2,undefined4 *param_3,ushort param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar3;
  undefined4 local_19;
  undefined4 uStack_15;
  undefined4 uStack_11;
  undefined4 uStack_d;
  char local_9;
  int *local_8;
  
  local_19 = *param_3;
  uStack_15 = param_3[1];
  uStack_11 = param_3[2];
  uStack_d = param_3[3];
  if ((*(int *)PTR_DAT_0066afcc < 5) &&
     ((*(int *)PTR_DAT_0066afcc != 4 || (*(int *)PTR_DAT_0066b47c < 1)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_8 = param_1;
  uVar2 = FUN_00403c80(param_1);
  local_9 = FUN_00403c10(uVar2,PTR_PTR_00475ac4);
  if (((param_4 & 1) == 0) || ((local_9 != '\0' && ((local_9 == '\0' || (bVar1)))))) {
    if ((bVar1) && ((param_4 & 0x80) != 0)) {
      FUN_0042ab6c(*(undefined4 *)(param_2 + 0x14),0xff000004);
      FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff000011);
      uVar3 = extraout_var_00;
    }
    else {
      FUN_0042ab6c(*(undefined4 *)(param_2 + 0x14),0xff000004);
      FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff000007);
      uVar3 = extraout_var_01;
    }
  }
  else {
    FUN_0042ab6c(*(undefined4 *)(param_2 + 0x14),0xff00000d);
    FUN_0042a3a0(*(undefined4 *)(param_2 + 0xc),0xff00000e);
    uVar3 = extraout_var;
  }
  (**(code **)(*local_8 + 0x30))
            (local_8,param_2,&local_19,CONCAT31((int3)(CONCAT22(uVar3,param_4) >> 8),local_9),
             CONCAT22(uVar3,param_4));
  return;
}

