// Address: 0047f62c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047f62c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x208) + 0x1e) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x20c) + 0x1e) = 1;
    }
    FUN_0047ed50(*(undefined4 *)(param_1 + 0x208),0);
    FUN_0047ed50(*(undefined4 *)(param_1 + 0x20c),0);
    if (*(char *)(param_1 + 0x210) == '\0') {
      iVar1 = *(int *)(param_1 + 0x208);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        FUN_0047eea0(iVar1,iVar2);
      }
      iVar1 = *(int *)(param_1 + 0x20c);
      if (*(char *)(iVar1 + 0x1e) != '\0') {
        iVar2 = MulDiv(*(int *)(iVar1 + 0x10),param_2,param_3);
        FUN_0047eea0(iVar1,iVar2);
      }
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x208) + 0x1e) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x20c) + 0x1e) = 0;
  return;
}

