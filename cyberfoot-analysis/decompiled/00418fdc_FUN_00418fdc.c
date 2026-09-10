// Address: 00418fdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00418fdc(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined1 local_114 [256];
  undefined4 local_14;
  undefined1 local_d;
  int *local_c;
  undefined4 local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_14 = 0;
  puStack_128 = &LAB_004190b2;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  iVar3 = FUN_00405ef4(DAT_0066c824);
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    iVar4 = 0;
    do {
      puVar1 = *(undefined4 **)(DAT_0066c824 + iVar4 * 4);
      if ((puVar1 != (undefined4 *)0x0) && (puVar1 != DAT_00662478)) {
        FUN_004039d4(*puVar1,local_114);
        FUN_00404b48(&local_14,local_114);
        cVar2 = FUN_004096cc(local_14,local_8);
        if (cVar2 != '\0') {
          *local_c = (int)puVar1;
          local_d = 1;
          break;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStackY_138;
  uStackY_138 = 0x419094;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c828);
  return;
}

