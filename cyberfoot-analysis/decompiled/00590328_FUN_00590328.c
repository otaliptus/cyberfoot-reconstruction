// Address: 00590328
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00590328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = param_5;
  iVar3 = 4;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  LOCK();
  UNLOCK();
  local_c = 0;
  local_20 = (undefined1 *)0x59034f;
  local_8 = param_2;
  FUN_00405608(&param_4);
  local_24 = &LAB_005904b7;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_20 = &stack0xfffffffc;
  iVar3 = FUN_00403c34(uVar1,PTR_PTR_004386b8);
  FUN_00466128(iVar3,1);
  FUN_00403c34(uVar1,PTR_PTR_004386b8);
  FUN_0046599c(iVar3,0x78);
  FUN_00403c34(uVar1,PTR_PTR_004386b8);
  FUN_00465978(iVar3,local_c);
  FUN_00409dd8(local_8,&stack0xffffffec);
  FUN_00404bf0(&local_10,&DAT_005904d0,unaff_EBX);
  uVar2 = FUN_00427360(DAT_006d223c,local_10);
  FUN_00404b6c(&stack0xffffffe8,param_4);
  FUN_00466238(uVar2,unaff_ESI);
  FUN_00465978(uVar2,local_c);
  FUN_00466128(uVar2,1);
  FUN_00403c34(uVar1,PTR_PTR_004386b8);
  FUN_004659c4(uVar2,*(int *)(iVar3 + 0x48) + 0xf);
  FUN_00409dd8(local_8,&local_20);
  FUN_00404bf0(&stack0xffffffe4,&DAT_005904dc,local_20);
  uVar2 = FUN_00427360(DAT_006d223c,unaff_EDI);
  puVar4 = &DAT_005904ec;
  FUN_00409dd8(param_6,&local_28);
  FUN_00404c64(&local_24,3);
  FUN_00466238(uVar2,local_24);
  FUN_00403c34(uVar1,PTR_PTR_004386b8);
  FUN_004659c4(uVar2,*(undefined4 *)(iVar3 + 0x48));
  FUN_00465978(uVar2,local_c);
  FUN_00466128(uVar2,1);
  *in_FS_OFFSET = &DAT_005904f8;
  FUN_004048f8(&local_28,7,puVar4,&LAB_005904be);
  FUN_00404ff0(&param_4);
  return;
}

