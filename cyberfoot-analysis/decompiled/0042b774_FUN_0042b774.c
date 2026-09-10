// Address: 0042b774
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b774(int param_1)

{
  char cVar1;
  HGDIOBJ pvVar2;
  COLORREF color;
  uint uVar3;
  
  pvVar2 = (HGDIOBJ)FUN_0042aba0(*(undefined4 *)(param_1 + 0x14));
  UnrealizeObject(pvVar2);
  pvVar2 = (HGDIOBJ)FUN_0042aba0(*(undefined4 *)(param_1 + 0x14));
  SelectObject(*(HDC *)(param_1 + 4),pvVar2);
  cVar1 = FUN_0042ac80(*(undefined4 *)(param_1 + 0x14));
  if (cVar1 == '\0') {
    FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
    color = FUN_00429e64();
    SetBkColor(*(HDC *)(param_1 + 4),color);
    SetBkMode(*(HDC *)(param_1 + 4),2);
    return;
  }
  FUN_0042ab64(*(undefined4 *)(param_1 + 0x14));
  uVar3 = FUN_00429e64();
  SetBkColor(*(HDC *)(param_1 + 4),~uVar3);
  SetBkMode(*(HDC *)(param_1 + 4),1);
  return;
}

