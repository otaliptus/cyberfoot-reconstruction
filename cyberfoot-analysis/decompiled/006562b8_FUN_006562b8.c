// Address: 006562b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_006562b8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = PTR_DAT_0066ae80;
  *(undefined4 *)PTR_DAT_0066ae80 = 0xffffffff;
  *(undefined4 *)PTR_DAT_0066b5a4 = 0xffffffff;
  *(undefined4 *)PTR_DAT_0066afd4 = 0xffffffff;
  *PTR_DAT_0066ac4c = 0;
  iVar1 = *(int *)PTR_DAT_0066b48c;
  *(undefined4 *)PTR_DAT_0066b5a4 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x44 + iVar1 * 0x2f8)
  ;
  uVar4 = *(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + iVar1 * 0x2f8);
  uVar3 = FUN_00654844(uVar4,*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar1 * 0x2f8));
  *(undefined4 *)puVar2 = uVar3;
  if (*(int *)puVar2 == -1) {
    uVar3 = FUN_006548c4(uVar4,*(undefined4 *)
                                (*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)PTR_DAT_0066b48c * 0x2f8)
                         ,*(undefined4 *)PTR_DAT_0066b48c);
    *(undefined4 *)puVar2 = uVar3;
  }
  if (*(int *)puVar2 == -1) {
    uVar4 = FUN_006547c4(uVar4);
    *(undefined4 *)puVar2 = uVar4;
  }
  if (*(int *)puVar2 == -1) {
    uVar4 = FUN_006547c4(0xffffffff);
    *(undefined4 *)puVar2 = uVar4;
  }
  iVar1 = *(int *)puVar2;
  if (iVar1 < 0) {
    *(undefined4 *)puVar2 = 0xffffffff;
    *(undefined4 *)PTR_DAT_0066b5a4 = 0xffffffff;
    *(undefined4 *)PTR_DAT_0066afd4 = 0xffffffff;
  }
  return iVar1 >= 0;
}

