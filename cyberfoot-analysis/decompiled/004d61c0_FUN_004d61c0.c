// Address: 004d61c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d61c0(int *param_1,short *param_2)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  short *psVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004d629c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x4d61e8;
  local_8 = param_1;
  FUN_004d5774(param_1);
  puStack_28 = &LAB_004d627f;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x48))();
  if (param_2 != (short *)0x0) {
    while (psVar4 = param_2, *param_2 != 0) {
      for (; (((sVar1 = *psVar4, sVar1 != 0 && (sVar1 != 10)) && (sVar1 != 0xd)) &&
             (sVar1 != 0x2028)); psVar4 = psVar4 + 1) {
      }
      iVar3 = (int)psVar4 - (int)param_2 >> 1;
      if (iVar3 < 0) {
        iVar3 = iVar3 + (uint)(((int)psVar4 - (int)param_2 & 1U) != 0);
      }
      FUN_004050e4(&local_c,param_2,iVar3);
      (**(code **)(*local_8 + 0x38))(local_8,local_c);
      param_2 = psVar4;
      if (*psVar4 == 0xd) {
        param_2 = psVar4 + 1;
      }
      if (*param_2 == 10) {
        param_2 = param_2 + 1;
      }
      if (*param_2 == 0x2028) {
        param_2 = param_2 + 1;
      }
    }
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004d6286;
  puStack_28 = (undefined1 *)0x4d627e;
  FUN_004d5830(local_8,uStack_2c,puVar2);
  return;
}

