// Address: 00431fb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int * FUN_00431fb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar8;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 local_1c [16];
  int *local_c;
  undefined4 local_8;
  
  puStack_2c = (undefined1 *)0x431fce;
  local_8 = param_3;
  local_c = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
  puStack_30 = &LAB_00432093;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_c + 0x40))(local_c,8);
  (**(code **)(*local_c + 0x34))(local_c,8);
  iVar1 = FUN_00430280(local_c);
  FUN_0042ac88(*(undefined4 *)(iVar1 + 0x14),0);
  FUN_0042ab6c(*(undefined4 *)(iVar1 + 0x14),param_2);
  uVar2 = (**(code **)(*local_c + 0x20))();
  puVar8 = local_1c;
  uVar3 = (**(code **)(*local_c + 0x2c))();
  FUN_0041c990(0,0,uVar3,puVar8,uVar2);
  FUN_0042af8c(iVar1,local_1c);
  uVar7 = 0;
  do {
    uVar6 = 0;
    do {
      uVar4 = uVar7 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      uVar5 = uVar6 & 0x80000001;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == uVar5) {
        FUN_0042b53c(iVar1,uVar6,uVar7,local_8);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != 9);
    uVar7 = uVar7 + 1;
  } while (uVar7 != 9);
  FUN_0042ff3c(local_c);
  *in_FS_OFFSET = uStack_34;
  return local_c;
}

