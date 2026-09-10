// Address: 0043558c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0043558c(undefined4 param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puStack_440;
  undefined1 *puStack_43c;
  undefined1 *puStack_438;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  CHAR local_41c [1024];
  LPBYTE local_1c;
  undefined4 local_18;
  CHAR *local_14;
  DWORD local_10;
  DWORD local_c;
  undefined4 local_8;
  
  puStack_438 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  local_428 = 0;
  local_424 = 0;
  local_420 = 0;
  puStack_43c = &LAB_00435769;
  puStack_440 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_440;
  local_c = 0;
  local_10 = 0;
  local_8 = param_1;
  BVar2 = EnumPrintersA(1,(LPSTR)0x0,5,(LPBYTE)0x0,0,&local_c,&local_10);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 != 0x7a) {
      DVar3 = GetLastError();
      if (DVar3 == 0x7b) {
        FUN_00406d44(PTR_PTR_0066af00,&local_420);
        FUN_004349ac(local_420);
      }
      else {
        FUN_0040f904();
      }
    }
  }
  local_1c = (LPBYTE)FUN_0040952c(local_c);
  puVar12 = &LAB_00435729;
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffbb4;
  EnumPrintersA(1,(LPSTR)0x0,5,local_1c,local_c,&local_c,&local_10);
  if (local_10 == 0) {
    GetProfileStringA("windows","device","",local_41c,0x3ff);
    local_14 = local_41c;
    local_18 = FUN_00434978(&local_14);
  }
  else {
    local_18 = *(undefined4 *)local_1c;
  }
  piVar4 = (int *)FUN_0043534c(local_8);
  iVar5 = (**(code **)(*piVar4 + 0x14))();
  if (-1 < iVar5 + -1) {
    iVar10 = 0;
    do {
      iVar6 = (**(code **)(*piVar4 + 0x18))(piVar4,iVar10);
      uVar8 = *(undefined4 *)(iVar6 + 8);
      FUN_00404adc(&local_424,local_18);
      cVar1 = FUN_004097c8(uVar8,local_424);
      if (cVar1 != '\0') {
        iVar5 = (**(code **)(*piVar4 + 0x18))(piVar4,iVar10);
        uVar7 = FUN_00404da4(*(undefined4 *)(iVar5 + 0xc));
        uVar11 = 0;
        uVar8 = FUN_00404da4(*(undefined4 *)(iVar5 + 4));
        uVar9 = FUN_00404da4(*(undefined4 *)(iVar5 + 8));
        FUN_00435080(local_8,uVar9,uVar8,uVar11,uVar7);
        FUN_004042fc();
        puVar13 = puStack_440;
        *in_FS_OFFSET = puVar12;
        puStack_440 = &LAB_00435770;
        FUN_004048f8(&local_428,3,puVar13);
        return;
      }
      iVar10 = iVar10 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uVar7;
  FUN_0040281c(local_1c,uVar7,puVar13);
  return;
}

