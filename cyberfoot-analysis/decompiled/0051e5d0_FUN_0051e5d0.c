// Address: 0051e5d0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051e5d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint nNumber;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined1 local_18 [16];
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  puStack_30 = &LAB_0051e724;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  cVar1 = FUN_004302ec(*(undefined4 *)(*(int *)(param_4 + -4) + 8));
  if (cVar1 == '\0') {
    FUN_00430280(*(undefined4 *)(*(int *)(param_4 + -4) + 8));
    uVar3 = FUN_0042b5a8();
    FUN_0051a354(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar3);
  }
  else {
    uVar3 = (**(code **)(**(int **)(*(int *)(param_4 + -4) + 8) + 0x24))();
    FUN_0051a248(*(undefined4 *)(*(int *)(param_4 + -4) + 0x20),uVar3);
  }
  uVar4 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
  uVar4 = uVar4 & 0xffff;
  if (-1 < (int)(uVar4 - 1)) {
    nNumber = 0;
    do {
      if ((nNumber & 0x1f) == 0) {
        uVar5 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),4);
        iVar6 = MulDiv(nNumber,100,uVar5 & 0xffff);
        uVar3 = 0;
        FUN_0041c990(0,0,0,local_18,0);
        puVar7 = local_18;
        FUN_00406d44(&PTR_DAT_0051676c,&local_1c);
        FUN_00403c80(*(undefined4 *)(*(int *)(param_4 + -4) + 4),*(undefined4 *)(param_4 + -4),1,
                     local_1c,puVar7,uVar3,iVar6);
      }
      uVar3 = (**(code **)**(undefined4 **)(param_4 + -8))(*(undefined4 **)(param_4 + -8),nNumber);
      uVar2 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),3);
      FUN_00402a04(uVar3,local_8,uVar2);
      uVar5 = FUN_0051d4c8(*(undefined4 *)(param_4 + -4),3);
      local_8 = local_8 + (uVar5 & 0xffff);
      nNumber = nNumber + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar7 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0051e72b;
  puStack_30 = (undefined1 *)0x51e723;
  FUN_004048d4(&local_1c,uStack_34,puVar7);
  return;
}

