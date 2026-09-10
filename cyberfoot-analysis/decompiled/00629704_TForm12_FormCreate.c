// Address: 00629704
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm12_FormCreate(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_006297d3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00642c50(0x2e,&local_8);
  FUN_004e1414(*(undefined4 *)(param_1 + 0x2fc),local_8);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0x704) = 0;
  iVar2 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066aca0);
  if ((PTR_DAT_0066ac78[0x75c] != '\0') && (-1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)PTR_DAT_0066aca0 + 0x140 + iVar3 * 0x294) == 0x1d) {
        if (3 < *(int *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar3 * 0x294)) {
          *(undefined4 *)(*(int *)PTR_DAT_0066aca0 + 0x144 + iVar3 * 0x294) = 3;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00651fa0();
  FUN_0043b234(*(undefined4 *)(param_1 + 0x300),1);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006297da;
  puStack_18 = (undefined1 *)0x6297d2;
  FUN_00404ff0(&local_8,uStack_1c,puVar1);
  return;
}

