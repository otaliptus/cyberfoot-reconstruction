// Address: 00636068
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00636068(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (*(int *)PTR_DAT_0066ae48 < *(int *)(PTR_DAT_0066ac78 + 0x13c)) {
    *(int *)PTR_DAT_0066ae48 = *(int *)PTR_DAT_0066ae48 + 1;
    uVar1 = *(undefined4 *)(PTR_DAT_0066ac78 + *(int *)PTR_DAT_0066ae48 * 4 + 0x13c);
    *(undefined4 *)(PTR_DAT_0066ac78 + 8) = uVar1;
    puStack_18 = (undefined1 *)0x6361f7;
    iVar3 = FUN_00636254(param_1,*(undefined4 *)(PTR_DAT_0066ac78 + 0x88),uVar1);
    if (iVar3 == 1) {
      if (*(int *)PTR_DAT_0066afdc != 0) {
        puStack_1c = &LAB_00636228;
        uStack_20 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_20;
        puStack_18 = &stack0xfffffffc;
        FUN_00483bc4(*(undefined4 *)PTR_DAT_0066afdc);
        *in_FS_OFFSET = uStack_20;
      }
      puStack_18 = (undefined1 *)0x63623a;
      FUN_0063b918(param_1);
      puStack_18 = (undefined1 *)0x636242;
      FUN_006405bc(param_1);
    }
    else {
      puStack_18 = (undefined1 *)0x63624c;
      FUN_00636068(param_1);
    }
  }
  else {
    puStack_18 = (undefined1 *)0x63609b;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,
                 CONCAT22((short)((uint)PTR_DAT_0066ac78 >> 0x10),0xfff5));
    puStack_18 = (undefined1 *)0x6360a9;
    FUN_00466414(DAT_006d52c4,CONCAT22(extraout_var,0xfff5));
    puStack_18 = (undefined1 *)0x6360ae;
    FUN_004e1a98();
    if ((*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) || (*(int *)(PTR_DAT_0066ac78 + 0x88) == 6)) {
      *(undefined4 *)PTR_DAT_0066b484 = 1;
    }
    else {
      *(undefined4 *)PTR_DAT_0066b484 = 0;
    }
    if (*(int *)PTR_DAT_0066afdc != 0) {
      puStack_1c = &LAB_0063610d;
      uStack_20 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_20;
      puStack_18 = &stack0xfffffffc;
      FUN_00483bc4(*(undefined4 *)PTR_DAT_0066afdc);
      *in_FS_OFFSET = uStack_20;
    }
    puStack_18 = (undefined1 *)0x636125;
    FUN_004853cc(*(undefined4 *)PTR_DAT_0066b760,0);
    if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 4) {
      puStack_18 = (undefined1 *)0x636138;
      cVar2 = FUN_0065746c();
      if (cVar2 == '\0') {
        if ((((PTR_DAT_0066ac78[0x175] == '\0') && (PTR_DAT_0066ac78[0x176] == '\0')) &&
            (PTR_DAT_0066ac78[0x177] == '\0')) && (PTR_DAT_0066ac78[0x178] == '\0')) {
          puStack_18 = (undefined1 *)0x636180;
          FUN_00618ac8(*(undefined4 *)PTR_DAT_0066b6a4);
        }
        else {
          puStack_18 = (undefined1 *)0x63618e;
          FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
        }
      }
      else {
        puStack_18 = (undefined1 *)0x63619c;
        FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
      }
    }
    else {
      puStack_18 = (undefined1 *)0x6361aa;
      FUN_00483d6c(*(undefined4 *)PTR_DAT_0066b6a4);
    }
    puStack_18 = (undefined1 *)0x6361b4;
    FUN_00483bc4(DAT_006d52c4);
  }
  return;
}

