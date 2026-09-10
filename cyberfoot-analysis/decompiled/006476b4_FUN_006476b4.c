// Address: 006476b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006476b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_8;
  
  local_18 = 0;
  puStack_20 = (undefined1 *)0x6476cb;
  local_8 = param_1;
  FUN_00404d94(param_1);
  puStack_24 = &LAB_006477e1;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  cVar3 = FUN_00647cec(local_8);
  if (cVar3 == '\0') {
    *(undefined4 *)PTR_DAT_0066b1e4 = 0;
    uVar4 = FUN_00405c1c(param_4 + 0x4b,param_5 + (uint)(0xffffffb4 < param_4));
    uVar1 = *(uint *)PTR_DAT_0066b1e4;
    local_14 = uVar1 + uVar4;
    local_10 = ((int)uVar1 >> 0x1f) + extraout_EDX + (uint)CARRY4(uVar1,uVar4);
    uVar5 = FUN_00441830(PTR_DAT_004416c4,CONCAT31((int3)((uint)local_10 >> 8),1));
    FUN_004418d0(uVar5,0x80000001);
    FUN_00441938(uVar5,"\\Software\\Cyberfoot2015");
    FUN_00441a14(uVar5,"\\Software\\Cyberfoot2015",1);
    FUN_00441d68(uVar5,&DAT_00647818,local_8);
    FUN_00403a84(uVar5);
    uVar5 = FUN_00441830(PTR_DAT_004416c4,1);
    FUN_004418d0(uVar5,0x80000001);
    FUN_00441938(uVar5,"\\Software\\Cyberfoot2015");
    FUN_00441a14(uVar5,"\\Software\\Cyberfoot2015",1);
    FUN_00409fa8(&local_18);
    FUN_00441d68(uVar5,&DAT_00647828,local_18);
    FUN_00403a84(uVar5);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006477e8;
  puStack_24 = (undefined1 *)0x6477d8;
  FUN_004048d4(&local_18,uStack_28,puVar2);
  puStack_24 = (undefined1 *)0x6477e0;
  FUN_004048d4(&local_8);
  return;
}

