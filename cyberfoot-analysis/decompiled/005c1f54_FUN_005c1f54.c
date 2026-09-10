// Address: 005c1f54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_005c1f54(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_1c;
  int local_18;
  int iStack_14;
  
  cVar1 = FUN_005c1a78(param_1);
  if ((cVar1 != '\x01') && (0 < param_2)) {
    if (*PTR_DAT_0066adfc == '\0') {
      FUN_00404830("Assertion failure",
                   "c:\\program files (x86)\\borland\\delphi7\\Lib\\Delphi Unicode Controls\\Source\\TntComCtrls.pas"
                   ,0xb70);
    }
    iVar5 = 0;
    local_18 = 0;
    iStack_14 = (**(code **)(**(int **)(param_1 + 0x288) + 0x14))();
    if (-1 < iStack_14) {
      iStack_14 = iStack_14 + 1;
      iStack_1c = 0;
      do {
        uVar2 = FUN_0046cae0(param_1);
        iVar3 = FUN_004e0b30(uVar2,iStack_1c);
        if (param_2 < iVar5 + iVar3) break;
        if (local_18 < iVar3) {
          iVar5 = iVar5 + 1;
          local_18 = local_18 + 1;
        }
        uVar2 = FUN_0046cae0(param_1);
        iVar4 = FUN_004e0be8(uVar2,iStack_1c,iVar3);
        local_18 = local_18 + iVar4;
        if ((iVar5 + iVar3 <= param_2) && (param_2 < iVar4 + iVar3 + iVar5)) break;
        iStack_1c = iStack_1c + 1;
        iStack_14 = iStack_14 + -1;
      } while (iStack_14 != 0);
    }
    param_2 = param_2 - iVar5;
  }
  return param_2;
}

