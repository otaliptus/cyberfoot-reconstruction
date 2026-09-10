import type { Metadata } from 'next';
import './globals.css';
export const metadata: Metadata = {
  title: 'Cyberfoot 2015 · Original game',
  description:
    'Play the original Cyberfoot 2015 football manager in your browser.',
};
export default function Layout({ children }: { children: React.ReactNode }) {
  return (
    <html lang="en">
      <body>{children}</body>
    </html>
  );
}
