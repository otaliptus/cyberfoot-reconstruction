// Address: 0042b744
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042b744(int param_1)

{
  HGDIOBJ h;
  
  h = (HGDIOBJ)FUN_0042a8b4(*(undefined4 *)(param_1 + 0x10));
  SelectObject(*(HDC *)(param_1 + 4),h);
  SetROP2(*(HDC *)(param_1 + 4),
          (uint)*(ushort *)(&DAT_00662930 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x18) * 2));
  return;
}

