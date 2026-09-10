// Address: 00636400
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00636400(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;
  undefined1 *puStackY_18;
  
  puStackY_18 = (undefined1 *)0x636411;
  iVar2 = GetSystemMetrics(0);
  puStackY_18 = (undefined1 *)0x63641a;
  GetSystemMetrics(1);
  if ((iVar2 == *(int *)PTR_DAT_0066ad9c) || (cVar1 = FUN_00653074(), cVar1 == '\0')) {
    cVar1 = FUN_00652fb8();
    if (cVar1 == '\0') {
      cVar1 = FUN_0065305c();
      if (cVar1 != '\0') {
        FUN_0046c5b8(param_1,0x96,100);
        FUN_00481860(DAT_006d52c4,1);
      }
    }
    else {
      FUN_0046c5b8(param_1,0x85,100);
      FUN_00481860(DAT_006d52c4,1);
    }
  }
  else {
    FUN_0046c5b8(param_1,iVar2,*(undefined4 *)PTR_DAT_0066ad9c);
    FUN_00481860(DAT_006d52c4,1);
  }
  cVar1 = FUN_00653074();
  if (cVar1 == '\0') {
    FUN_00652fb8();
  }
  if (800 < iVar2) {
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),&DAT_00636714);
    FUN_0050a850(uVar3,100);
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),&DAT_00636724);
    FUN_0050a850(uVar3,0x1e);
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"energia");
    FUN_0050a850(uVar3,0x50);
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"habilidades");
    FUN_0050a850(uVar3,0x37);
  }
  if (0x400 < iVar2) {
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),&DAT_00636714);
    FUN_0050a850(uVar3,0x78);
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),&DAT_00636724);
    FUN_0050a850(uVar3,0x1e);
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"energia");
    FUN_0050a850(uVar3,0x6e);
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"habilidades");
    FUN_0050a850(uVar3,0x3c);
  }
  if (*PTR_DAT_0066b458 != '\0') {
    uVar3 = FUN_0050e4dc(*(undefined4 *)(param_1 + 0x334),"habilidades");
    FUN_0050a850(uVar3,0x5a);
  }
  FUN_00465978(*(undefined4 *)(param_1 + 0x420),*(int *)(*(int *)(param_1 + 0x304) + 0x40) + 0x1e);
  FUN_00465978(*(undefined4 *)(param_1 + 0x424),*(int *)(*(int *)(param_1 + 0x300) + 0x40) + 0x1e);
  FUN_00465978(*(undefined4 *)(param_1 + 0x410),*(int *)(*(int *)(param_1 + 0x428) + 0x40) + 0x23);
  FUN_00465978(*(undefined4 *)(param_1 + 0x40c),*(int *)(*(int *)(param_1 + 0x394) + 0x40) + 0x23);
  FUN_00465978(*(undefined4 *)(param_1 + 0x3c0),*(int *)(*(int *)(param_1 + 0x3bc) + 0x40) + 0x28);
  puStackY_18 = &LAB_006366fc;
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  iVar2 = *(int *)(PTR_DAT_0066ac78 + 8);
  if (-1 < iVar2) {
    if (*(int *)(*(int *)PTR_DAT_0066af70 + 0xb0 + iVar2 * 0x2f8) == 0xffffff) {
      FUN_0050eb60(*(undefined4 *)(param_1 + 0x334),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
      FUN_0050ed9c(*(undefined4 *)(param_1 + 0x334),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
    }
    else {
      FUN_0050eb60(*(undefined4 *)(param_1 + 0x334),
                   *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0xac + iVar2 * 0x2f8));
      FUN_0050ed9c(*(undefined4 *)(param_1 + 0x334),
                   *(undefined4 *)
                    (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
    }
  }
  *in_FS_OFFSET = uStackY_1c;
  return;
}

